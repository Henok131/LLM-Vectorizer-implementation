# LLM Vectorizer Implementation

This repository contains implementations and experiments related to vectorization using Large Language Models (LLMs) and traditional techniques. It aims to explore and compare the performance, correctness, and efficiency of AI-assisted and manually optimized vectorization.

## Features

- **Non-vectorized vs. Vectorized Implementations**: Comparative analysis of traditional loops and optimized vectorized alternatives.
- **AI-Generated SIMD Transformations**: Investigating how AI can assist in generating SIMD (Single Instruction, Multiple Data) transformations.
- **AVX Optimizations for Matrix Multiplication**: Utilizing Advanced Vector Extensions (AVX) to improve performance.
- **Verification of Vectorized Code**: Addressing correctness challenges in vectorized implementations.

## Repository Structure

```
📂 LLM-Vectorizer-implementation
├── 📂 ai-generated/       # AI-generated SIMD transformations
├── 📂 non-vectorized/     # Standard, non-vectorized implementations
├── 📂 vectorized/         # Optimized, manually vectorized implementations
├── 📂 verification/       # Methods for verifying correctness in vectorization
├── README.md             # Project documentation
```

## Getting Started

### Prerequisites

- A C/C++ compiler with vectorization support (e.g., GCC, Clang, or MSVC).
- Hardware and compiler support for SIMD instructions (e.g., AVX, SSE).

### Clone the Repository

```bash
git clone https://github.com/Henok131/LLM-Vectorizer-implementation.git
cd LLM-Vectorizer-implementation
```

### Run Examples

Navigate to the desired directory and compile the examples:

#### For AI-Generated SIMD Transformations:

```bash
cd ai-generated
gcc -O2 -mavx example.c -o example
./example
```

#### For Traditional Vectorized Implementations:

```bash
cd vectorized
gcc -O2 -march=native optimized_code.c -o optimized
./optimized
```

## Contributing

Contributions are welcome! To contribute:

1. **Fork the repository** and create a new branch:
   ```bash
   git checkout -b feature-branch
   ```
2. **Make changes and commit**:
   ```bash
   git commit -m "Add new vectorized implementation"
   ```
3. **Push and create a Pull Request**:
   ```bash
   git push origin feature-branch
   ```
   Open a pull request describing your changes.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact

For any questions or discussions, please open an issue in the repository.

---

*This README was auto-generated to match the structure and objectives of the repository. For the most up-to-date details, refer to the actual implementation.*
