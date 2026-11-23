#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104918a8;
extern "C" RuntimeTag data_10491dd4;
extern "C" const RuntimeVTable data_1021e6a4;
extern "C" unsigned data_104918a0;
extern "C" RuntimeTag data_10491dcc;
extern "C" const RuntimeVTable data_1021e694;
extern "C" unsigned data_1049189c;
extern "C" RuntimeTag data_10491dc8;
extern "C" const RuntimeVTable data_1021e3d4;

typedef Token<&data_104918a8, &data_10491dd4, &data_1021e6a4> Type0;
typedef Token<&data_104918a0, &data_10491dcc, &data_1021e694> Type1;
typedef Token<&data_1049189c, &data_10491dc8, &data_1021e3d4> Type2;

extern "C" bool fn_02ee8078(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
