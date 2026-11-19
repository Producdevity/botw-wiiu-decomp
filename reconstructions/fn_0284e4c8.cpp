#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d654;
extern "C" RuntimeTag data_1048d650;
extern "C" const RuntimeVTable data_101458b4;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1014587c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1014586c;

typedef Token<&data_1048d654, &data_1048d650, &data_101458b4> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1014587c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1014586c> Type2;

extern "C" bool fn_0284e4c8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
