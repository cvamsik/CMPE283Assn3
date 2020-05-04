{
	"masking, test out of bounds 1",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_1, 5),
	BPF_MOV32_IMM(BPF_REG_2, 5 - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 0,
},
{
	"masking, test out of bounds 2",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_1, 1),
	BPF_MOV32_IMM(BPF_REG_2, 1 - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 0,
},
{
	"masking, test out of bounds 3",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_1, 0xffffffff),
	BPF_MOV32_IMM(BPF_REG_2, 0xffffffff - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 0,
},
{
	"masking, test out of bounds 4",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_1, 0xffffffff),
	BPF_MOV32_IMM(BPF_REG_2, 1 - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 0,
},
{
	"masking, test out of bounds 5",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_1, -1),
	BPF_MOV32_IMM(BPF_REG_2, 1 - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 0,
},
{
	"masking, test out of bounds 6",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_1, -1),
	BPF_MOV32_IMM(BPF_REG_2, 0xffffffff - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 0,
},
{
	"masking, test out of bounds 7",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_1, 5),
	BPF_MOV32_IMM(BPF_REG_2, 5 - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 0,
},
{
	"masking, test out of bounds 8",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_1, 1),
	BPF_MOV32_IMM(BPF_REG_2, 1 - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 0,
},
{
	"masking, test out of bounds 9",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_1, 0xffffffff),
	BPF_MOV32_IMM(BPF_REG_2, 0xffffffff - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 0,
},
{
	"masking, test out of bounds 10",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_1, 0xffffffff),
	BPF_MOV32_IMM(BPF_REG_2, 1 - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 0,
},
{
	"masking, test out of bounds 11",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_1, -1),
	BPF_MOV32_IMM(BPF_REG_2, 1 - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 0,
},
{
	"masking, test out of bounds 12",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_1, -1),
	BPF_MOV32_IMM(BPF_REG_2, 0xffffffff - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 0,
},
{
	"masking, test in bounds 1",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_1, 4),
	BPF_MOV32_IMM(BPF_REG_2, 5 - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 4,
},
{
	"masking, test in bounds 2",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_1, 0),
	BPF_MOV32_IMM(BPF_REG_2, 0xffffffff - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 0,
},
{
	"masking, test in bounds 3",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_1, 0xfffffffe),
	BPF_MOV32_IMM(BPF_REG_2, 0xffffffff - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 0xfffffffe,
},
{
	"masking, test in bounds 4",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_1, 0xabcde),
	BPF_MOV32_IMM(BPF_REG_2, 0xabcdef - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 0xabcde,
},
{
	"masking, test in bounds 5",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_1, 0),
	BPF_MOV32_IMM(BPF_REG_2, 1 - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 0,
},
{
	"masking, test in bounds 6",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_1, 46),
	BPF_MOV32_IMM(BPF_REG_2, 47 - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_1),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_1, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 46,
},
{
	"masking, test in bounds 7",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_3, -46),
	BPF_ALU64_IMM(BPF_MUL, BPF_REG_3, -1),
	BPF_MOV32_IMM(BPF_REG_2, 47 - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_3),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_3),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_3, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_3),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 46,
},
{
	"masking, test in bounds 8",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_3, -47),
	BPF_ALU64_IMM(BPF_MUL, BPF_REG_3, -1),
	BPF_MOV32_IMM(BPF_REG_2, 47 - 1),
	BPF_ALU64_REG(BPF_SUB, BPF_REG_2, BPF_REG_3),
	BPF_ALU64_REG(BPF_OR, BPF_REG_2, BPF_REG_3),
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_2, 0),
	BPF_ALU64_IMM(BPF_ARSH, BPF_REG_2, 63),
	BPF_ALU64_REG(BPF_AND, BPF_REG_3, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_3),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.retval = 0,
},
