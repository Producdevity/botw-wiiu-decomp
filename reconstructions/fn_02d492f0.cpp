#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487000;
extern "C" RuntimeTag data_10487e94;
extern "C" const RuntimeVTable data_101e4470;
extern "C" unsigned data_104867b0;
extern "C" RuntimeTag data_104868dc;
extern "C" const RuntimeVTable data_101e4460;
extern "C" unsigned data_104867ac;
extern "C" RuntimeTag data_104868d8;
extern "C" const RuntimeVTable data_101e43d8;

typedef Token<&data_10487000, &data_10487e94, &data_101e4470> Type0;
typedef Token<&data_104867b0, &data_104868dc, &data_101e4460> Type1;
typedef Token<&data_104867ac, &data_104868d8, &data_101e43d8> Type2;

extern "C" bool fn_02d492f0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
