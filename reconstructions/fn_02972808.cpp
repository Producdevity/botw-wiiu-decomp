#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e264;
extern "C" RuntimeTag data_1048e268;
extern "C" const RuntimeVTable data_10171690;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10171680;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10171670;

typedef Token<&data_1048e264, &data_1048e268, &data_10171690> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10171680> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10171670> Type2;

extern "C" bool fn_02972808(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
