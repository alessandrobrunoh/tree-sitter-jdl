#include <node.h>
#include <nan.h>
#include "tree_sitter/parser.h"

using namespace v8;

extern "C" TSLanguage * tree_sitter_jdl();

namespace {

NAN_METHOD(GetLanguage) {
  info.GetReturnValue().Set(
    Nan::New<External>(tree_sitter_jdl())
  );
}

NAN_MODULE_INIT(Init) {
  Nan::Set(target, Nan::New("getLanguage").ToLocalChecked(),
           Nan::GetFunction(Nan::New<FunctionTemplate>(GetLanguage)).ToLocalChecked());
}

NODE_MODULE(tree_sitter_jdl_binding, Init)

}  // namespace