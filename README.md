# C-String-Substring

這段程式的主要目的是 **實作類似 BASIC 語言的 MID$()、RIGHT$() 和 LEFT$() 函數**，讓 C 語言能夠擷取字串的 **中間、右側、左側** 指定長度的部分。  

---

### 🔹 **這段程式在做什麼？**  
這是一個 **C 語言的字串處理函數**，實作了：  
✅ `strmid()`：從字串中間擷取指定長度的子字串（類似 `MID$()`）  
✅ `strright()`：擷取字串最右邊指定長度的字元（類似 `RIGHT$()`）  
✅ `strleft()`：擷取字串最左邊指定長度的字元（類似 `LEFT$()`）  

---

### 🔹 **這段程式是怎麼運作的？**  
#### **1️⃣ `strmid()`（取字串中間部分）**  
- **參數**：`strmid(char *str, int pos, int len)`  
- **功能**：從字串 `str` **第 `pos` 個位置開始，取出 `len` 個字元**  
- **邏輯**：  
  - 先移動到 `pos-1` 位置  
  - 依序將 `len` 個字元存入新的字串  
  - **確保結尾 `\0`，避免錯誤輸出**

#### **2️⃣ `strright()`（取字串右側部分）**  
- **參數**：`strright(char *str, int len)`  
- **功能**：取出字串 `str` **最右邊 `len` 個字元**  
- **邏輯**：  
  - 先計算字串長度 `count`  
  - **從 `(count - len)` 開始讀取**，取出 `len` 個字元  
  - **確保結尾 `\0`**

#### **3️⃣ `strleft()`（取字串左側部分）**  
- **參數**：`strleft(char *str, int len)`  
- **功能**：取出字串 `str` **最左邊 `len` 個字元**  
- **邏輯**：  
  - **直接讀取前 `len` 個字元**  
  - **確保結尾 `\0`**


