#MAIN PROJECT SOURCE CODE

stu_data=[]
def entry (reg_n,nam,contact,cat,fb):
    feedback_entry = [reg_n, nam.upper(), contact, cat, fb]
    with open("feedback.txt", "a") as y:
        for item in feedback_entry:
            y.write(str(item) + ",")
        y.write("\n")
        
        print("Feedback recorded successfully\n")


with open("student_data.txt","r") as x:
    #to load the registration number and name of students from student_data file in two different lists
    for line in x:
        student_data=line.strip().split(",")
        reg_no = student_data[0]
        name = student_data[1]
        mob=int(student_data[4])
        stu_data.append([reg_no,name.lower(),mob])
            

    #to accept name and reg. no.:
    nam= input("Enter your name: ").lower()
    reg_n = input("Enter your registration number: ")
    contact = int(input("Enter your mobile number: "))

    #to check whether the student present in the list or not and accept the feedback:
    Student_found = False
    for i in stu_data:
        if (reg_n == i[0] and nam==i[1]):
            Student_found = True
            print("Hello! Welcome to the feedback registration system")
            cat=input("Input the Category if your feedback (answer only in onle word; eg: faculty,library,clubs,technical): ")
            fb=input("Enter your detailed feedback: ")
            print(" ")
            print("Your final feedback related to '",cat,"' is '",fb,"'\n")
            ans=input("Final Submit (Y/N): ").lower()
            print(" ")
            if(ans=='y'):
                entry(reg_n,nam,contact,cat,fb)
            break

    if (not Student_found):
        print("Sorry! You are not registered in our system. Please contact the admin to register yourself\n")