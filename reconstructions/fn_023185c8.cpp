#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489d40;
extern "C" RuntimeTag data_10489d44;
extern "C" const RuntimeVTable data_10083f70;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10083f60;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10083f50;

typedef Token<&data_10489d40, &data_10489d44, &data_10083f70> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10083f60> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10083f50> Type2;

extern "C" bool fn_023185c8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
