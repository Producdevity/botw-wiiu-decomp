#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e244;
extern "C" RuntimeTag data_1048e248;
extern "C" const RuntimeVTable data_1017105c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1017104c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1017103c;

typedef Token<&data_1048e244, &data_1048e248, &data_1017105c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1017104c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1017103c> Type2;

extern "C" bool fn_02970c88(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
