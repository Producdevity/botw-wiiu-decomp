#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104901f0;
extern "C" RuntimeTag data_10491198;
extern "C" const RuntimeVTable data_101de994;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101de984;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101de974;

typedef Token<&data_104901f0, &data_10491198, &data_101de994> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101de984> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101de974> Type2;

extern "C" bool fn_02d01b7c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
