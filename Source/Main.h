
#define   BOARD_SIZE  64
#define   BOARD_WIDTH 8


#define   HFILE     0x8080808080808080
#define   GFILE     0x4040404040404040
#define   FFILE     0x2020202020202020
#define   EFILE     0x1010101010101010
#define   DFILE     0x0808080808080808
#define   CFILE     0x0404040404040404
#define   BFILE     0x0202020202020202
#define   AFILE     0x0101010101010101

#define   RANK8     0xFF00000000000000
#define   RANK7     0x00FF000000000000
#define   RANK6     0x0000FF0000000000
#define   RANK5     0x000000FF00000000
#define   RANK4     0x00000000FF000000
#define   RANK3     0x0000000000FF0000
#define   RANK2     0x000000000000FF00
#define   RANK1     0x00000000000000FF

#define   G1H2      0x0000000000008040
#define   F1H3      0x0000000000804020
#define   E1H4      0x0000000080402010
#define   D1H5      0x0000008040201008
#define   C1H6      0x0000804020100804
#define   B1H7      0x0080402010080402
#define   A1H8      0x8040201008040201
#define   A2G8      0x4020100804020100
#define   A3F8      0x2010080402010000
#define   A4E8      0x1008040201000000
#define   A5D8      0x0804020100000000
#define   A6C8      0x0402010000000000
#define   A7B8      0x0201000000000000

//king masks for files, assume starting row == 1
#define   KFILEA    0x0000000000030303
#define   KFILEB    0x0000000000070707
#define   KFILEC    0x00000000000E0E0E
#define   KFILED    0x00000000001C1C1C
#define   KFILEE    0x0000000000383838
#define   KFILEF    0x0000000000707070
#define   KFILEG    0x0000000000E0E0E0
#define   KFILEH    0x0000000000C0C0C0

//knight masks for files, assume starting row == 2
#define   NFILEA    0x0000000204000402
#define   NFILEB    0x0000000508000805
#define   NFILEC    0x0000000a1100110a
#define   NFILED    0x0000001422002214
#define   NFILEE    0x0000002844004428
#define   NFILEF    0x0000005088008850
#define   NFILEG    0x000000A0100010A0
#define   NFILEH    0x0000004020002040

#define   WP0       0x0000000000010300
#define   WP1       0x0000000000020700
#define   WP7       0x000000000080C000
#define   BP16      0x0000000000000301
#define   BP17      0x0000000000000702
#define   BP23      0x000000000000C080


#define   A8H1      0x0102040810204080


/*

56 57 58 59 60 61 62 63 | 7
48 49 50 51 52 53 54 55 | 6
40 41 42 43 44 45 46 47 | 5
32 33 34 35 36 37 38 39 | 4
24 25 26 27 28 29 30 31 | 3
16 17 18 19 20 21 22 23 | 2
8  9  10 11 12 13 14 15 | 1
0  1  2  3  4  5  6  7  | 0
A  B  C  D  E  F  G  H
*/
