#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a328;
extern "C" RuntimeTag data_1048a32c;
extern "C" const RuntimeVTable data_10095b80;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10095b70;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10095b60;

typedef Token<&data_1048a328, &data_1048a32c, &data_10095b80> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10095b70> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10095b60> Type2;

extern "C" bool fn_02388a68(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
