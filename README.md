# Physical Computing 1 - 2025

Repository สำหรับวิชา Physical Computing 1 ปีการศึกษา 2025

## 📁 โครงสร้างโปรเจค

```
.
├── cfile                    # Script สำหรับสร้างไฟล์ C ใหม่
├── lab02/                   # Lab 2
├── lab03/                   # Lab 3
├── lab04/                   # Lab 4
├── lab05/                   # Lab 5
├── lab06/                   # Lab 6
├── lab07/                   # Lab 7
└── QuizRerun/              # โฟลเดอร์สำหรับ Quiz
```

## 🛠️ การใช้งาน cfile Script

### วิธีการใช้งาน

`cfile` เป็น script ที่ช่วยสร้างไฟล์ C ใหม่พร้อม template พื้นฐาน

```bash
./cfile <directory/filename>
```

### ตัวอย่างการใช้งาน

```bash
# สร้างไฟล์ในโฟลเดอร์ปัจจุบัน
./cfile hello
# ผลลัพธ์: สร้างไฟล์ hello.c

# สร้างไฟล์ในโฟลเดอร์ย่อย
./cfile lab08/exercise1
# ผลลัพธ์: สร้างไฟล์ lab08/exercise1.c

# สร้างไฟล์ในโฟลเดอร์หลายชั้น
./cfile lab08/chapter1/problem1
# ผลลัพธ์: สร้างไฟล์ lab08/chapter1/problem1.c
```

### ไฟล์ที่สร้างขึ้น

เมื่อรัน `./cfile filename` จะสร้างไฟล์ `filename.c` ที่มี template พื้นฐาน:

```c
#include <stdio.h>

int main(){
    return 0;
}
```

### การตั้งค่าสิทธิ์การใช้งาน

หาก script ไม่สามารถรันได้ ให้ตั้งค่าสิทธิ์การใช้งาน !!!

```bash
chmod +x cfile
```