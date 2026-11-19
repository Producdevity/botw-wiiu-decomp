#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10485ee4;
extern "C" RuntimeTag data_10492520;
extern "C" const RuntimeVTable data_10288240;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10288230;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10288210;

typedef Token<&data_10485ee4, &data_10492520, &data_10288240> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10288230> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10288210> Type2;

extern "C" bool fn_0315e0cc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
