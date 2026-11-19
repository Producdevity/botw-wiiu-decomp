#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c32c;
extern "C" RuntimeTag data_1048c330;
extern "C" const RuntimeVTable data_10105c28;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10105c18;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10105c08;

typedef Token<&data_1048c32c, &data_1048c330, &data_10105c28> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10105c18> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10105c08> Type2;

extern "C" bool fn_02672764(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
