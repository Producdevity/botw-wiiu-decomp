#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488e6c;
extern "C" RuntimeTag data_10488e70;
extern "C" const RuntimeVTable data_1005b5cc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1005b5bc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1005b5ac;

typedef Token<&data_10488e6c, &data_10488e70, &data_1005b5cc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1005b5bc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1005b5ac> Type2;

extern "C" bool fn_022280d4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
