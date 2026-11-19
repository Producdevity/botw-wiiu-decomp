#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a5dc;
extern "C" RuntimeTag data_1048a5e0;
extern "C" const RuntimeVTable data_1009d824;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1009d814;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1009d804;

typedef Token<&data_1048a5dc, &data_1048a5e0, &data_1009d824> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1009d814> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1009d804> Type2;

extern "C" bool fn_023af6e4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
