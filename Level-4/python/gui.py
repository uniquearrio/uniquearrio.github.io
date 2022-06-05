import imp
from tkinter import *
root= Tk()
C_Entry=Entry(root,width=4)
C_Entry.pack(side='left')

C_Unit=Entry(root,text="Celsius")
C_Unit.pack(side="left")

def compute():
    C=float(C_Entry.get())
    F=(9.0/5)*C + 32
    F_label.configure(text='%g' % F)

compute=Button(root,text='  is  ',command=compute)
compute.pack(side='left',padx=4)
F_label=Label(root,width=4)
F_label.pack(side='left')

F_Unit = Label(root,text="Fahrenheit")
F_Unit.pack(side='left')

root.mainloop()