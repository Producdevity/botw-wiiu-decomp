#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a414;
extern "C" RuntimeTag data_1048a418;
extern "C" const RuntimeVTable data_10098970;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10098960;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10098950;

typedef Token<&data_1048a414, &data_1048a418, &data_10098970> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10098960> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10098950> Type2;

extern "C" bool fn_0239a030(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
