#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489c70;
extern "C" RuntimeTag data_10489c74;
extern "C" const RuntimeVTable data_10081908;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100818c8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100818b8;

typedef Token<&data_10489c70, &data_10489c74, &data_10081908> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100818c8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100818b8> Type2;

extern "C" bool fn_0230cf8c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
