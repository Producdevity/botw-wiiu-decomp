#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489fec;
extern "C" RuntimeTag data_10489ff0;
extern "C" const RuntimeVTable data_1008bf10;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008bf00;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008bef0;

typedef Token<&data_10489fec, &data_10489ff0, &data_1008bf10> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1008bf00> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1008bef0> Type2;

extern "C" bool fn_0234cb14(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
