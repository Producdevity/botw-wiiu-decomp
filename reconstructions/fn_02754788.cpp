#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048cb7c;
extern "C" RuntimeTag data_1048cb78;
extern "C" const RuntimeVTable data_10124514;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10124504;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101244f4;

typedef Token<&data_1048cb7c, &data_1048cb78, &data_10124514> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10124504> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101244f4> Type2;

extern "C" bool fn_02754788(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
