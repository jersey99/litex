#ifndef __BOOT_H
#define __BOOT_H

int serialboot(void);
void netboot(void);
void flashboot(void);
void romboot(void);
void sdcardboot(void);
void sataboot(void);

#endif /* __BOOT_H */
