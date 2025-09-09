{
  "targets": [
    {
      "target_name": "tree_sitter_jdl_binding",
      "include_dirs": [
        "<!(node -e \"console.log(require('nan').include)\")",
        "src"
      ],
      "sources": [
        "bindings/node/binding.cc",
        "src/parser.c"
      ],
      "cflags_c": [
        "-std=c99"
      ]
    }
  ]
}