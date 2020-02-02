# Head-First-Design-Patterns [C++]

---

#### Strategy Pattern
* Definition
    ```sh
    The Strategy Pattern - defines a family of algorithms,
    encapsulates each one, and makes them interchangeable.
    Strategy lets the algorithm vary independently from 
    clients that use it.
    ```
* OO Design Principles
    ```sh
    - Identify the aspects of your application that vary
    and separate them from what stays the same.

    - Program to an interface, not an implementation.

    - Fever composition over inheritence.
    ```
---

#### Observer Pattern
* Definition
    ```sh
    The Observer Pattern - defines a one-to-many dependency
    between objects so that when one object changes state,
    all of its dependents are notified and updated automatically.
    ```
* OO Design Principles
    ```sh
    - Loosely coupled designs allow us to build flexible OO systems
    that can handle changes because they minimize the interdependency
    between objects.
    ```
---

#### Decorator Pattern
* Definition
    ```sh
    The Decorator Pattern - attaches additional responsibilities to
    an object dynamically. Decorators provide a flexible alternative
    to subclassing for extending functionality.
    ```
* OO Design Principles
    ```sh
    - Classes should be open for extension, but close for modification.
    
    ```
---

####  S.O.L.I.D Principles
* Single Responsibility Principle(SRP)
    ```sh
    A class should have only one reason to change.
    ```

* Open Closed Principle(OCP)
    ```sh
    Software entities like classes, modules and functions should be open 
    for extension and closed for modifications.
    ```

* Liscov Substitution Principle(LSP)
    ```sh
    Derived types must be completely substitutable for their bases types. 
    ```

* Interface Segregation Principle(ISP)
    ```sh
    Clients should not be forced to depend upon interfaces that they don't use.
    ```

* Dependency Inversion Principle(DIP)
    ```sh
    - High-level modules should not be dependent on low-level modules.
    Both should be depend on abstractions.
    - Abstractions should not depend on details. Details should depend on
    abstraction.
    ```
---
