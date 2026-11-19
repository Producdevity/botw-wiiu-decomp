#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d638;
extern "C" RuntimeTag data_1048d63c;
extern "C" const RuntimeVTable data_101456bc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101456ac;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1014569c;

typedef Token<&data_1048d638, &data_1048d63c, &data_101456bc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101456ac> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1014569c> Type2;

extern "C" bool fn_0284d704(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
