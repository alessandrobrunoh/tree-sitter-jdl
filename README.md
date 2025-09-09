# Tree-Sitter JDL Parser

A [Tree-Sitter](https://tree-sitter.github.io/tree-sitter/) parser for the [JHipster Domain Language (JDL)](https://www.jhipster.tech/jdl/), providing syntax highlighting, parsing, and language support for `.jdl` files.

## What is JDL?

JHipster Domain Language (JDL) is a domain-specific language that allows you to describe all your entities, their relationships, validations, and configurations in a single file. It's used to generate JHipster applications with complex data models.

## Features

This Tree-Sitter parser currently supports:

- ✅ **Entity declarations** with fields and validations
- ✅ **Relationship definitions** (OneToMany, ManyToOne, OneToOne, ManyToMany)
- ✅ **Enum declarations**
- ✅ **Comments** (both line `//` and block `/* */` comments)
- ✅ **Field types** (String, Integer, Long, Boolean, LocalDate, etc.)
- ✅ **Validations** (required, min, max, pattern)
- 🚧 **Application configurations** (basic structure implemented)

## Installation

### Using npm

```bash
npm install tree-sitter-jdl
```

### Building from source

```bash
git clone https://github.com/alessandrobrunoh/tree-sitter-jdl
cd tree-sitter-jdl
npm install
npm run build
```

## Usage

### Command Line

You can use the Tree-Sitter CLI to parse JDL files:

```bash
# Parse a JDL file
tree-sitter parse your-model.jdl

# Test the grammar
tree-sitter test

# Generate queries
tree-sitter generate
```

### Node.js

```javascript
const Parser = require('tree-sitter');
const JDL = require('tree-sitter-jdl');

const parser = new Parser();
parser.setLanguage(JDL);

const sourceCode = `
entity Book {
  title String required,
  isbn String min(10) max(13),
  pages Integer
}

entity Author {
  name String required,
  email String
}

relationship OneToMany {
  Author{books} to Book{author}
}
`;

const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());
```

### Editor Integration

This parser can be integrated with editors that support Tree-Sitter:

- **Neovim**: Add to your Tree-Sitter configuration
- **Emacs**: Use with `tree-sitter-mode`
- **VS Code**: Via Tree-Sitter extensions
- **Atom**: Built-in Tree-Sitter support

## JDL Syntax Overview

### Entity Declaration

```jdl
entity EntityName {
  fieldName FieldType validations,
  anotherField AnotherType
}
```

**Example:**
```jdl
entity Book {
  title String required,
  isbn String min(10) max(13),
  publishedDate LocalDate,
  pages Integer min(1),
  available Boolean
}
```

### Supported Field Types

- **Text**: `String`, `TextBlob`
- **Numbers**: `Integer`, `Long`, `BigDecimal`, `Float`, `Double`
- **Dates**: `LocalDate`, `ZonedDateTime`, `Instant`, `Duration`
- **Other**: `Boolean`, `UUID`, `Blob`, `AnyBlob`, `ImageBlob`

### Validations

- `required` - Field is mandatory
- `min(value)` - Minimum value/length
- `max(value)` - Maximum value/length
- `pattern(regex)` - Regex pattern validation

### Relationships

```jdl
relationship RelationshipType {
  EntityA{fieldInA} to EntityB{fieldInB}
}
```

**Supported relationship types:**
- `OneToMany`
- `ManyToOne`
- `OneToOne`
- `ManyToMany`

**Example:**
```jdl
relationship OneToMany {
  Author{books} to Book{author}
}

relationship ManyToMany {
  Book{categories} to Category{books}
}
```

### Enums

```jdl
enum EnumName {
  VALUE1, VALUE2, VALUE3
}
```

**Example:**
```jdl
enum Language {
  ENGLISH, FRENCH, SPANISH, GERMAN
}

entity Book {
  title String required,
  language Language
}
```

### Comments

```jdl
// Single line comment

/*
 * Multi-line comment
 * Can span multiple lines
 */

entity Book {
  title String required // Field comment
}
```

## Development

### Project Structure

```
tree-sitter-jdl/
├── grammar.js          # Grammar definition
├── src/                # Generated parser files
│   ├── parser.c
│   ├── tree_sitter/
│   └── node-types.json
├── test/
│   └── corpus/         # Test cases
├── bindings/
│   └── node/           # Node.js bindings
└── examples/           # Example JDL files
```

### Grammar Rules

The grammar is defined in `grammar.js` and includes:

- **source_file**: Root rule that contains multiple definitions
- **entity_declaration**: Entity definitions with optional body
- **field_declaration**: Field definitions with type and validations
- **relationship_declaration**: Relationship mappings between entities
- **enum_declaration**: Enum type definitions

### Running Tests

```bash
# Run all tests
npm test

# Run Tree-Sitter specific tests
tree-sitter test

# Parse a specific file
tree-sitter parse examples/bookstore.jdl
```

### Contributing

1. Fork the repository
2. Create a feature branch
3. Add tests for new syntax support
4. Update the grammar in `grammar.js`
5. Run `tree-sitter generate` to regenerate the parser
6. Run tests to ensure everything works
7. Submit a pull request

### Adding New Syntax Support

To add support for new JDL syntax:

1. **Update grammar.js**: Add new rules for the syntax
2. **Add test cases**: Create test files in `test/corpus/`
3. **Regenerate parser**: Run `tree-sitter generate`
4. **Test**: Run `tree-sitter test` to verify

Example of adding a new rule:
```javascript
// In grammar.js
pagination_declaration: $ => seq(
  'paginate',
  $.identifier,
  'with',
  choice('pagination', 'infinite-scroll')
),
```

## Examples

### Complete JDL Example

```jdl
// Bookstore domain model
enum Language {
  ENGLISH, FRENCH, SPANISH, GERMAN
}

enum BookStatus {
  AVAILABLE, BORROWED, RESERVED
}

entity Author {
  firstName String required min(2) max(50),
  lastName String required min(2) max(50),
  email String pattern(/^[^@\s]+@[^@\s]+\.[^@\s]+$/),
  birthDate LocalDate
}

entity Book {
  title String required min(1) max(200),
  isbn String required min(10) max(13),
  publishedDate LocalDate,
  pages Integer min(1),
  language Language,
  status BookStatus required
}

entity Category {
  name String required min(2) max(50),
  description TextBlob
}

relationship OneToMany {
  Author{books} to Book{author required}
}

relationship ManyToMany {
  Book{categories} to Category{books}
}
```

## Roadmap

- [ ] Application configuration blocks
- [ ] Deployment configurations
- [ ] Microservice definitions
- [ ] DTO mappings
- [ ] Service layer definitions
- [ ] Pagination declarations
- [ ] Search configurations

## License

MIT License - see LICENSE file for details.

## Resources

- [JHipster Documentation](https://www.jhipster.tech/)
- [JDL Studio](https://start.jhipster.tech/jdl-studio/) - Online JDL editor
- [Tree-Sitter Documentation](https://tree-sitter.github.io/tree-sitter/)
- [Tree-Sitter Grammar Guide](https://tree-sitter.github.io/tree-sitter/creating-parsers)
