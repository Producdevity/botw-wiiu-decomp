typedef int s32;
typedef unsigned int u32;

extern "C" void fn_030b0cb8(unsigned int *, const unsigned int *);
extern "C" unsigned char data_10549fec[];

extern "C" void fn_0385d448(s32 address) {
    fn_030b0cb8((unsigned int *)(address + 0xC), (u32 *) data_10549fec);
    fn_030b0cb8((unsigned int *)(address + 4), (u32 *) data_10549fec);
}
