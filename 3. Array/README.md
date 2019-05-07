# Array


## Tóm tắt
1. Mảng & con trỏ là 2 cách dùng khác nhau khi lấy dữ liệu qua địa chỉ ô nhớ
2. Chỗ nào dùng được mảng thì có thể dùng con trỏ thay thế

## Bài tập

1. Tìm dãy con tăng
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

2. Trộn mảng
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

3. Nhân ma trận với kích thước và input nhập vào

4. Xóa cột trong ma trận

5. Xóa hàng trong ma trận

6. Sắp xếp theo thứ tự tăng dần các số (từ góc trái trên-> góc phải dưới) theo đường chéo trong ma trận
```
  Input:
      4 5 9 7 4
      8 2 7 6 4
      2 8 4 1 9
      3 7 4 8 1
      
  Output:
      2 1 6 4 4
      4 4 1 9 7
      2 8 4 5 9
      3 7 8 8 7
```

7. In ra đường đi xoắn ốc của ma trận (đi từ góc trên bên trái, xoay vào trong)
```
  Input:
      4 5 9 7 4
      8 2 7 6 4
      2 8 4 1 9
      
  Output:
      4 5 9 7 4 4 9 1 4 8 2 8 2 7 6
```

8. Xoay ma trận 90 độ theo chiều kim đồng hồ

9. Tìm đường đi của 0, đi từ góc trái trên bằng cách in ra các vị trí rẽ
```
  Input:
      0 0 0 0 1 
      1 1 0 0 1 
      1 1 0 1 1 
      1 1 0 1 1 
      1 1 0 1 1 
      1 1 0 0 0 
      1 1 1 1 0 
      1 0 0 0 0 
      0 0 1 1 1 
      
  Output:
     Duong di cua 0 la:
      [0,0] - [0,3] - [1,3] - [1,2] - [5,2] - [5,4] - [7,4] - [7,1] - [8,1] - [8,0]
```

10. Tìm đường (ngang, dọc hoặc chéo) 1 dài nhất trong ma trận, in ra vị trí đầu - cuối, và độ dài
```
  Input:
      0 0 0 0 0 0 0 0 0 0
      0 0 1 0 1 1 1 1 0 0
      0 0 0 1 0 0 0 0 0 0
      0 0 0 0 1 0 0 0 0 0
      0 0 0 1 0 1 0 0 0 0
      0 0 1 0 0 0 1 0 0 0
      0 0 0 0 0 1 0 1 0 0
      0 0 0 0 1 0 0 0 0 0
      0 0 0 0 0 0 0 0 0 0
      
  Output:
     Duong 1 dai nhat la: [1, 2] - [6, 7]
     Do dai la: 6
```