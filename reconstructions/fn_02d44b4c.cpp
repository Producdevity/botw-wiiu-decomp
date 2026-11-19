#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486ffc;
extern "C" RuntimeTag data_10491288;
extern "C" const RuntimeVTable data_101e3da0;
extern "C" unsigned data_1048651c;
extern "C" RuntimeTag data_10486520;
extern "C" const RuntimeVTable data_101e3d90;
extern "C" unsigned data_104862b8;
extern "C" RuntimeTag data_10486534;
extern "C" const RuntimeVTable data_101e3d70;

typedef Token<&data_10486ffc, &data_10491288, &data_101e3da0> Type0;
typedef Token<&data_1048651c, &data_10486520, &data_101e3d90> Type1;
typedef Token<&data_104862b8, &data_10486534, &data_101e3d70> Type2;

extern "C" bool fn_02d44b4c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
