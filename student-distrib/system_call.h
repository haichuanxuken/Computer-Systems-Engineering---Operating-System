// #ifndef SYSTEM_CALL_H
// #define SYSTEM_CALL_H
//
// #include "types.h"
//
// // total number of files a single PCB is holding
// #define FA_SIZE                 8
//
// // the file operation table should be contained in each file struct in the file array
// typedef struct fileOperationTable {
//     // definition of file operation table function pointers
//     typedef int32_t (*oFunc)(const uint8_t *filename);
//     typedef int32_t (*cFunc)(int32_t fd);
//     typedef int32_t (*rFunc)(int32_t fd, void *buf, int32_t nbytes);
//     typedef int32_t (*wFunc)(int32_t fd, const void *buf, int32_t nbytes);
// } fileOperationTable_t;
//
// // the file struct in the file array
// typedef struct ece391_file {
//     fileOperationTable_t *table;
//     uint32_t *inode;
//     uint32_t filePos;
//     uint32_t flags;
// } ece391_file_t;
//
// // the file array should be used and initialze whenever a new PCB is init
// typedef struct fileArray {
//     ece391_file_t files[FA_SIZE];
//     uint32_t fullFlag;
//     uint32_t *inode;
// } fileArray_t;
//
// int32_t open(const uint8_t *filename);
//
// int32_t close(int32_t fd);
//
// int32_t read(int32_t fd, void *buf, int32_t nbytes);
//
// int32_t write(int32_t fd, const void *buf, int32_t nbytes);
//
// void init_fot(void);
//
// #endif
