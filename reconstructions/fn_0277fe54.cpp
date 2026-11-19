#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048bc40;
extern "C" RuntimeTag data_1048bc44;
extern "C" const RuntimeVTable data_1012b538;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1012b528;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1012b518;

typedef Token<&data_1048bc40, &data_1048bc44, &data_1012b538> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1012b528> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1012b518> Type2;

extern "C" bool fn_0277fe54(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
