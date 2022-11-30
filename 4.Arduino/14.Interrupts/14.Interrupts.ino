int ledPin = 13; 

void tatled()  // chương trình con thực hiện ngắt
{
    // tắt đèn led khi nhấn nút, nhả ra led nhấp nháy trở lại
    digitalWrite(ledPin, LOW);
}

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(3, INPUT_PULLUP); // sử dụng điện trở kéo lên cho chân số 2, ngắt 0
    // ngat so 0 đc nối vs chân số 2
    // ngat so 1 đc nối vs chân số 3
    attachInterrupt(1, tatled, LOW); //attachInterrupt(thứ tự ngắt, tên chương trình con thực hiện ngắt, chế độ ngắt)
}

void loop()
{
    // đoạn chương trình này nhấp nháy led sau 500ms
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
}   