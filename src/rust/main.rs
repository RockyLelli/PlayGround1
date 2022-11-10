use std::env;

fn main(){
    let name: Vec<String> = env::args().collect();
    for arg in name.iter(){
        print!("Hello ");
        println!("{}", name[]);
    }
}