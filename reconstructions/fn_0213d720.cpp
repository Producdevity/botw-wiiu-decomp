#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487c0c;
extern "C" RuntimeTag data_10487c10;
extern "C" const RuntimeVTable data_1002ad20;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1002ad10;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1002ad00;

typedef Token<&data_10487c0c, &data_10487c10, &data_1002ad20> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1002ad10> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1002ad00> Type2;

extern "C" bool fn_0213d720(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
