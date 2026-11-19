#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048af2c;
extern "C" RuntimeTag data_1048af30;
extern "C" const RuntimeVTable data_100ba948;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100ba938;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ba928;

typedef Token<&data_1048af2c, &data_1048af30, &data_100ba948> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100ba938> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100ba928> Type2;

extern "C" bool fn_0245bb0c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
