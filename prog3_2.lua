function InfixToPostfix(inStr)
    tokString = {}
i = 0
    stack = {}
    postFix = {}

    for v in (inStr.. " "):gmatch("([^ ]*) ") do

        if (v == "*" or v == "/") then
            if (stack[1] == "+" or stack[1] == "-") then
                table.insert(stack, 1, v)
            elseif (stack[1] == "/" or stack[1] == "*") then
                table.insert(postFix, table.remove(stack, 1))
                table.insert(stack, 1, v)
            else
                table.insert(stack, 1, v)
            end
        elseif (v == "+" or v == "-") then
            if (stack[1] == "+" or stack[1] == "-") then
                table.insert(postFix, table.remove(stack,1))
                table.insert(stack, 1, v)
            elseif (stack[1] == "/" or stack[1] == "*") then
                table.insert(postFix, table.remove(stack,1))
                if (stack[1] == "+" or stack[1] == "-") then
                table.insert(postFix, table.remove(stack,1))
                end
                table.insert(stack, 1, v)
            else
                table.insert(stack, 1, v)
            end
        else
            table.insert(postFix, v)
        end

    i = i + 1
    end

    while (stack[1]) do
    table.insert(postFix, table.remove(stack,1))
    end

    post = postFix[1]
    for j = 2, i do
        post = post .. " " .. postFix[j]
    end
    print(post)
    return(post)
end









        
    
