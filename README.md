# ChangeWallPaperAUTO
The wallpaper will be changed according to your system time, the pictures you choose are recommended to  be time related. So you can create your own Dynamic wallpaper like the one in macOS.

> This project is designed to use the (.EXE) file together with (.BAT) file to change the wallpaper. At present this project is rough. More functions will be added to it in th > efuture release.

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

10. Right click this and choose Manage

![](resources\set1.png)

11. Choose this

![](resources\set2.png)

12. New a task and do the following steps

![](resources\set3.png)

![](resources\set4.png)

13. When setting the [program or script] in step 2 , use the filepath where your .bat file exists. 

![](resources\set5.png)

14. Finally you can see a task like this(the taskname is according to you)

![](resources\set6.png)

15. Restart your computer, you can stay for a while to see whether your computer have changed the wallpaper automatically every two hours after the time you login in the computer.