#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490240;
extern "C" RuntimeTag data_10492d90;
extern "C" const RuntimeVTable data_102aab24;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_102aab14;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102aab04;

typedef Token<&data_10490240, &data_10492d90, &data_102aab24> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_102aab14> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102aab04> Type2;

extern "C" bool fn_032dd670(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
