namespace {
struct Extents { unsigned char pad0[564]; int rows; int columns; };
struct Stride { unsigned char pad0[12]; int bytes; };
struct Layout { unsigned char pad0[4]; Extents* extents; unsigned char pad8[20]; Stride* stride; };
struct Block { unsigned char pad0[8]; Layout* layout; unsigned char pad12[20]; unsigned char* base; };
typedef char BlockSize[sizeof(Block) == 36 ? 1 : -1];
}

extern "C" unsigned char* fn_02e73e54(Block* block) {
    Extents* extents = block->layout->extents;
    return block->base + block->layout->stride->bytes * (extents->rows * extents->columns);
}
