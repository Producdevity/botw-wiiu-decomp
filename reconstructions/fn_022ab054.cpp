#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489688;
extern "C" RuntimeTag data_1048968c;
extern "C" const RuntimeVTable data_10072160;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10072150;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10072140;

typedef Token<&data_10489688, &data_1048968c, &data_10072160> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10072150> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10072140> Type2;

extern "C" bool fn_022ab054(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
