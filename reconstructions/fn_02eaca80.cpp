#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104865f4;
extern "C" RuntimeTag data_10491828;
extern "C" const RuntimeVTable data_10218f54;
extern "C" unsigned data_104865ec;
extern "C" RuntimeTag data_10491820;
extern "C" const RuntimeVTable data_10218f44;
extern "C" unsigned data_104865e8;
extern "C" RuntimeTag data_10491854;
extern "C" const RuntimeVTable data_10218dbc;

typedef Token<&data_104865f4, &data_10491828, &data_10218f54> Type0;
typedef Token<&data_104865ec, &data_10491820, &data_10218f44> Type1;
typedef Token<&data_104865e8, &data_10491854, &data_10218dbc> Type2;

extern "C" bool fn_02eaca80(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
