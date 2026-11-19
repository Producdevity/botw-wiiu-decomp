#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489d88;
extern "C" RuntimeTag data_10489d8c;
extern "C" const RuntimeVTable data_1008496c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008494c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008493c;

typedef Token<&data_10489d88, &data_10489d8c, &data_1008496c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1008494c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1008493c> Type2;

extern "C" bool fn_0231bd64(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
