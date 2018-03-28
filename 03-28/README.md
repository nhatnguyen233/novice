# I. Mảng 1 chiều

1. Nhập vào giá trị của 1 mảng n phần tử, tính tổng, tích các số đó, in ra số lớn nhất, bé nhất

2. Sắp xếp 1 mảng nhập vào gồm n phần tử theo chiều tăng, giảm dần

3. *** Trong windows nếu dí Alt + Tab, chương trình sẽ tự động chuyển san màn hình chương trình mới sử dụng gần nhất (recently used). Viết hàm điều khiển logic chuyển màn hình này. In/Out như sau:

```
Input: 
Nhập tên m chương trình, thứ tự các chương trình đang sử dụng cũng theo thứ tự nhập vào.
Dí Alt Tab => hiện chương trình mới mở tiếp theo
Dí Alt Tab Tab => hiện chương trình gần chương trình gần mở nhất
Alt Tab Tab Tab => …. Tương tự
Output:
Hiện ra tên chương trình khi thực hiện bấm nút tương ứng

Ví dụ:
	Nhap so luong chuong trinh: 4
	Nhap ten cac chuong trinh: Google Chrome
	Notepad
	Windows Explorer
	Windows Media Player
	
		Da san sang:
		<Alt Tab> Ban chon: Notepad
		<Alt Tab Tab> Ban chon: Windows Explorer
		<Alt Tab Tab> Ban chon: Google Chrome
```

4. Tìm dãy con tăng
```
  Input:
    Nhap vao day: 1 5 6 1 3 4 9 6 10 2
    
  Output:
    Cac day con tang:
    1 5 6
    1 3 4 9 
    6 10 
    2
```

5. Trộn mảng
 Khởi tạo hai mảng A và B có kích thước lần lượt là n và m phần tử (n, m ≤ 14) chứa các số nguyên trong phạm vi [1, 999]. Sắp xếp hai mảng này theo thứ tự không giảm, sau đó trộn 2 mảng lại với nhau sao cho mảng nhận được là một mảng không giảm.
```
  Input:
    Hai mảng ban đầu:
      A: 4 9 7 
      B: 6 8 1 3
      
  Output:
    Hai mảng sau khi sắp xếp:
      A: 4 7 9
      B: 1 3 6 8
    Trộn mảng A và B ta được: 1 3 4 6 7 8 9
```
