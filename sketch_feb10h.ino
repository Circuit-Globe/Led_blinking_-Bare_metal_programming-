void about_us(){                                                   // About Us Function

count=12;
abt=1;

lcd.setCursor(4,0);
lcd.print("About us");

String message = String("Dharani, Dipendra & Anup");
int length;

 length = message.length();

while(abt)
{
  for(int i = 0; i < length; i++)
  {
    ClearRow(0);
    delay_ms(10);
    lcd.print(message.substring(i,i+15));
    delay_ms(500);

    if(abt==0){count=2; lcd.clear(); break;}
  }
 }
}

void ClearRow(int rowNum)
{
  lcd.setCursor(0,rowNum);
  lcd.print("                 ");
  lcd.setCursor(0,rowNum);
}
