#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104870d8;
extern "C" RuntimeTag data_1048b0dc;
extern "C" const RuntimeVTable data_102af47c;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102af46c;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102af45c;

typedef Token<&data_104870d8, &data_1048b0dc, &data_102af47c> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_102af46c> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_102af45c> Type2;

extern "C" bool fn_0332212c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
