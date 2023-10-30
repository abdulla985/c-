use std::io::{stdin, stdout, Write};

fn main(){
    let mut a = String::new();
    let mut b = String::new();
    let mut operator = String::new();
    print!("Enter number 1 : ");
    stdout().flush().expect("Couldn't flush statement 1");
    stdin().read_line(&mut a).expect("Couldn't read number 1");
    print!("Enter number 2 : ");
    stdout().flush().expect("Couldn't flush statement 2");
    stdin().read_line(&mut b).expect("Couldn't read number 2");
    print!("Enter the operation (+, -, *, /) : ");
    stdout().flush().expect("Couldn't flush statement 3");
    stdin().read_line(&mut operator).expect("Couldn't read operator");

    let a: f32 = a.trim().parse().unwrap();
    let b: f32 = b.trim().parse().unwrap();
    let operator: char = operator.trim().chars().next().unwrap();
}
