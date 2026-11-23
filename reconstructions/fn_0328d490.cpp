#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486328;
extern "C" RuntimeTag data_1048632c;
extern "C" const RuntimeVTable data_102a1818;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102a1808;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102a1790;

typedef Token<&data_10486328, &data_1048632c, &data_102a1818> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_102a1808> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_102a1790> Type2;

extern "C" bool fn_0328d490(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
