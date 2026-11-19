#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104901d8;
extern "C" RuntimeTag data_10492e44;
extern "C" const RuntimeVTable data_102b14dc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_102b14cc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102b14bc;

typedef Token<&data_104901d8, &data_10492e44, &data_102b14dc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_102b14cc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102b14bc> Type2;

extern "C" bool fn_0332bae4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
