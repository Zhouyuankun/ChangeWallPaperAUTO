# ChangeWallPaperAUTO
The wallpaper will be changed according to your system time, the pictures you choose are recommended to  be time related. So you can create your own Dynamic wallpaper like the one in macOS.

> This project is designed to use the (.EXE) file together with (.BAT) file to change the wallpaper. At present this project is rough. More functions will be added to it in the future releases.

-----

## How to use?

1. Download the change.cpp and changeWpaper.bat.

2. Open the change.cpp.

3. Find the 
   
   ```
      WCHAR wc1[100] = L"C:\\Users\\Celeglow Zhou\\Desktop\\wallpaper\\MCwallpaper";
   ```

4. Change the path according to your computer, the second to last parameter should be the directory you saved the images. The last parameter is the formatted name of your image. so remember to change inages name all to the same format, eg: (myname0.png, myname1.png, ...). 12 images are required.  Noted that you are counted from 0,  the last images name should be myname11.png)

5. Save and Compile the change.cpp to generate the .exe file.

6. Open the changeWpaper.bat

7. Find the
   
   ```
   start "" "C:\Users\Celeglow Zhou\Desktop\hide\changeWpaper.exe"
   ```

8. Change the filepath of the exe file to the one you have just generated.

9. Add the .bat file to your Windows task schedule programe according to the following steps.

10. Right click this and choose Manage(if no picture below, please consult this [Can't See Pictures?](https://blog.csdn.net/weixin_42128813/article/details/102915578)

![](https://github.com/Zhouyuankun/ChangeWallPaperAUTO/blob/main/resources/set1.png?raw=true)

11. Choose this

![](https://github.com/Zhouyuankun/ChangeWallPaperAUTO/blob/main/resources/set2.png?raw=true)

12. New a task and do the following steps

![](https://github.com/Zhouyuankun/ChangeWallPaperAUTO/blob/main/resources/set3.png?raw=true)

![](https://github.com/Zhouyuankun/ChangeWallPaperAUTO/blob/main/resources/set4.png?raw=true)

13. When setting the [program or script] in step 2 , use the filepath where your .bat file exists. 

![](https://github.com/Zhouyuankun/ChangeWallPaperAUTO/blob/main/resources/set5.png?raw=true)

14. Finally you can see a task like this(the taskname is according to you)

![](https://github.com/Zhouyuankun/ChangeWallPaperAUTO/blob/main/resources/set6.png?raw=true)

15. Restart your computer, you can stay for a while to see whether your computer have changed the wallpaper automatically every two hours after the time you login in the computer.
