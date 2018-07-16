#!/usr/bin/python3

#the property of inheritence of class
class Person(object):
    def __init__(self, name, sex):
        self.name = name
        self.sex = sex
    def print_title(self):
        if self.sex == "male":
            print("man")
        elif self.sex == "female":
            print("woman")

class Child(Person):
    pass

May = Child("May", "female")
Peter = Person("Peter", "male")

print(May.name, May.sex, Peter.name, Peter.sex)
May.print_title()
Peter.print_title()

# the isinstance() and issubclass() property of class
class Person(object):
    pass
class Child(Person):
    pass

May = Child()
Peter = Person()

print(isinstance(May, Child))
print(isinstance(May, Person))
print(isinstance(Peter, Child))
print(isinstance(Peter, Person))
print(issubclass(Child, Person))

# the Polymorphism property of class

class Person(object):
    def __init__(self, name, sex):
        self.name = name
        self.sex = sex
    def print_title(self):
        if self.sex == "male":
            print("man")
        elif self.sex == "female":
            print("woman")

class Child(Person):
    def print_title(self):
        if self.sex == "male":
            print("boy")
        elif self.sex == "female":
            print("girl")

May = Child("May", "female")
Peter = Person("Peter", "male")

print(May.name, May.sex, Peter.name, Peter.sex)
May.print_title()
Peter.print_title()


# the constructor function of class
class Person(object):
    def __init__(self, name, sex):
        self.name = name
        self.sex = sex

class Child(Person):
    def __init__(self, name, sex, mother, father):
        Person.__init__(self, name, sex)
        self.mother = mother
        self.father = father

May = Child("May", "female", "April", "June")
print(May.name, May.sex, May.mother, May.father)


# the multiple inheritance of class
class Person(object):
    def __init__(self, name, sex):
        self.name = name
        self.sex = sex
    def print_title(self):
        if self.sex == "male":
            print("man")
        elif self.sex == "female":
            print("woman")

class Child(Person):
    pass

class Baby(Child):
    pass

May = Baby("May", "female")
print(May.name, May.sex)
May.print_title()

class Child(Person):
    def print_title(self):
        if self.sex == "male":
            print("boy")
        elif self.sex == "female":
            print("girl")

class Baby(Child):
    pass

May = Baby("May", "female")
May.print_title()
















