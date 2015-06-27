# pl-2303drv
<br />
http://stackoverflow.com/questions/5417732/howto-prepare-qtcreator-for-linux-driver-kernel-development
<br />

git commit -m "comment" <br />
git status <br />
git reset -> undo git add .  <br />
git reset 'file' -> singe file <br />
git log -> info about commiters <br />
 <br /> <br />
sudo insmod modulek.ko <br />
dmesg | tail <br />
lsmod | grep modulek <br />
sudo rmmod modulek<br />

sudo cat /sys/module/modulek/sections/.text<br />

sudo grep hello /proc/kallsyms <br />
ffffffffa08d5000 d hello_int	[modulek]<br />
ffffffffa08d3000 t hello_func	[modulek]<br />

gdb modulek.ko<br />
(gdb) p hello_int<br />
(gdb) b hello_func2 <br />

add-symbol-file modulek.ko 0xffffffffa08d3000 -s .data 0xffffffffa08d5000 -s .bss 0xffffffffa08d5280 <br />


http://www.linux.com/learn/linux-training/33991-the-kernel-newbie-corner-kernel-and-module-debugging-with-gdb <br />
http://korenofer.blogspot.in/2008/12/linux-kernel-module-debugging-gdb-setup.html <br />


lsusb -t > 1.txt <br />
lsusb -t > 2.txt <br />
diff 1.txt 2.txt<br />

6d5<br />
<         |__ Port 3: Dev 9, If 0, Class=Vendor Specific Class, Driver=pl2303, 12M<br />


lsmod | grep pl<br />
pl2303                 19133  0 <br />
usbserial              45014  1 pl2303<br />



