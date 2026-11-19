#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048db8c;
extern "C" RuntimeTag data_1048db88;
extern "C" const RuntimeVTable data_1015ac90;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1015ac80;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1015ac70;

typedef Token<&data_1048db8c, &data_1048db88, &data_1015ac90> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1015ac80> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1015ac70> Type2;

extern "C" bool fn_028e291c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
